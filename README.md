NSURLConnection-SelfSigned
==========================

A category on NSURLConnection that allows making an async request that accepts all https certificates.

Sample usage:

```
[NSURLConnection  sendAsynchronousRequestAcceptingAllCerts:request 
                  queue:queue 
                  completionHandler:^(NSURLResponse *response, NSData *data, NSError *connectionError) {
    //process results
}];
```
