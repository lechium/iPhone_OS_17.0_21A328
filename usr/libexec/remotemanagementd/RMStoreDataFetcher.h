//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURLSession;

@interface RMStoreDataFetcher : NSObject
{
    NSURLSession *_URLSession;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0020000000098f37
@property(retain, nonatomic) NSURLSession *URLSession; // @synthesize URLSession=_URLSession;
- (_Bool)_validateResponseForURL:(id)arg1 statusCode:(id)arg2 headers:(id)arg3 fetchedData:(id)arg4 downloadURL:(id)arg5 error:(id *)arg6;	// IMP=0x0010000000098cfb
- (id)_userAgent;	// IMP=0x0010000000098bdd
- (id)_createRequestWithURL:(id)arg1 additionalHeaders:(id)arg2;	// IMP=0x0010000000098adc
- (id)_dictionaryForResponse:(id)arg1 downloadedData:(id)arg2 downloadedURL:(id)arg3;	// IMP=0x00100000000988e7
- (void)_processDownloadResponseWithURL:(id)arg1 downloadURL:(id)arg2 response:(id)arg3 error:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000985d6
- (_Bool)_moveDownloadedFile:(id)arg1 downloadURL:(id)arg2 error:(id *)arg3;	// IMP=0x00100000000980c5
- (id)_downloadTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097f42
- (void)_downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000097ccc
- (void)_downloadMDMDataAtURL:(id)arg1 downloadURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097bce
- (void)_processDataResponseWithURL:(id)arg1 response:(id)arg2 error:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000978d7
- (id)_dataTaskWithURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x0010000000097753
- (void)_fetchDataAtURL:(id)arg1 additionalHeaders:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000974dd
- (void)_fetchMDMDataAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;	// IMP=0x00100000000973f9
- (id)_makeSession;	// IMP=0x001000000009738a
- (void)downloadResponseDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 additionalHeaders:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x0010000000096cba
- (void)downloadDataAtURL:(id)arg1 downloadURL:(id)arg2 extensionToken:(id)arg3 useDDM:(_Bool)arg4 completionHandler:(CDUnknownBlockType)arg5;	// IMP=0x00100000000968b8
- (void)fetchResponseDataAtURL:(id)arg1 useDDM:(_Bool)arg2 additionalHeaders:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x00100000000965d6
- (void)fetchDataAtURL:(id)arg1 useDDM:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;	// IMP=0x00100000000964f0

@end

