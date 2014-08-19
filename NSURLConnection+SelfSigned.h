//
//  NSURLConnection+SelfSigned.h
//  SAB Connect
//
//  Created by Yuriy on 8/18/14.
//  Copyright (c) 2014 yuriy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSURLConnection (SelfSigned)

/**
 *  Sends async request while accepting all self-signed certs
 *
 */
+ (void)sendAsynchronousRequestAcceptingAllCerts:(NSURLRequest *)request queue:(NSOperationQueue *)queue completionHandler:(void (^)(NSURLResponse *, NSData *, NSError *))handler;

@end
