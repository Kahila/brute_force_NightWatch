module.exports = {
    "src_folders" : ["tests"],
  
    "webdriver" : {
      "start_process": true,
      "server_path": "node_modules/.bin/chromedriver",
      "port": 9515 //default port for chrom driver
    },
  
    "test_settings" : {
      "default" : {
        "desiredCapabilities": {
          "browserName": "chrome"
        }
      }
    }
  };
  