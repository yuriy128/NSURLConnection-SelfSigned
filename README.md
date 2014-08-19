NSURLConnection-SelfSigned
==========================

A category on NSURLConnection that allows making an async request that accepts all https certificates.

Sample usage:

  [NSURLConnection sendAsynchronousRequestAcceptingAllCerts:[NSURLRequest requestWithURL:url] queue:[NSOperationQueue     mainQueue] completionHandler:^(NSURLResponse *response, NSData *data, NSError *connectionError) {
    //process results
  }];
