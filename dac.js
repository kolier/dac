/**
 * @file
 * Data and Chart system javascript.
 */

// Load the Visualization API and the piechart package.
google.load('visualization', '1', {'packages':['corechart']});

(function($) {
  Drupal.behaviors.dac = {
    attach : function(context, settings) {
      google.setOnLoadCallback(drawChart);
      
      function drawChart() {
        for (var chartId in settings.dac) {
          var wrap = new google.visualization.ChartWrapper();
          var data;
          if (settings.dac[chartId].data.type == 'json_source') {
            var xmlhttp = $.ajax({
              url: settings.dac[chartId].data.url,
              dataType: "json",
              async: false
            });
            data = $.parseJSON(xmlhttp.responseText);
          }
          wrap.setContainerId(settings.dac[chartId].containerId);
          wrap.setChartType(settings.dac[chartId].chart.chartType);
          wrap.setDataTable(data);
          wrap.setOptions(settings.dac[chartId].chart.options);
          wrap.draw();
        }
      }

    }
  }
})(jQuery);
