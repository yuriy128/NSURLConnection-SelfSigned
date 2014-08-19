NSURLConnection-SelfSigned
==========================

A category on NSURLConnection that allows making async requests that accept all https certificates.

Sample usage:

```
[NSURLConnection  sendAsynchronousRequestAcceptingAllCerts:request 
                  queue:queue 
                  completionHandler:^(NSURLResponse *response, NSData *data, NSError *connectionError) {
    //process results
}];
```
