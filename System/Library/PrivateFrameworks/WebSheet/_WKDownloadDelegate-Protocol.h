//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WebSheet/NSObject-Protocol.h>

@class NSError, NSString, NSURL, NSURLAuthenticationChallenge, NSURLResponse, _WKDownload;

@protocol _WKDownloadDelegate <NSObject>

@optional
- (NSString *)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 allowOverwrite:(_Bool *)arg3;
- (_Bool)_download:(_WKDownload *)arg1 shouldDecodeSourceDataOfMIMEType:(NSString *)arg2;
- (void)_downloadProcessDidCrash:(_WKDownload *)arg1;
- (void)_download:(_WKDownload *)arg1 didCreateDestination:(NSString *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveAuthenticationChallenge:(NSURLAuthenticationChallenge *)arg2 completionHandler:(void (^)(long long, NSURLCredential *))arg3;
- (void)_downloadDidCancel:(_WKDownload *)arg1;
- (void)_download:(_WKDownload *)arg1 didFailWithError:(NSError *)arg2;
- (void)_downloadDidFinish:(_WKDownload *)arg1;
- (void)_download:(_WKDownload *)arg1 decideDestinationWithSuggestedFilename:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSString *))arg3;
- (void)_download:(_WKDownload *)arg1 didWriteData:(unsigned long long)arg2 totalBytesWritten:(unsigned long long)arg3 totalBytesExpectedToWrite:(unsigned long long)arg4;
- (void)_download:(_WKDownload *)arg1 didReceiveData:(unsigned long long)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveResponse:(NSURLResponse *)arg2;
- (void)_download:(_WKDownload *)arg1 didReceiveServerRedirectToURL:(NSURL *)arg2;
- (void)_downloadDidStart:(_WKDownload *)arg1;
@end
