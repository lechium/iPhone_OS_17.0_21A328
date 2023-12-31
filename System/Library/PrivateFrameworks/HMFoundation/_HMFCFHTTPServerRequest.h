//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableData, _HMFCFHTTPServerConnection;

__attribute__((visibility("hidden")))
@interface _HMFCFHTTPServerRequest
{
    struct _CFHTTPServerRequest *_requestRef;	// 8 = 0x8
    struct __CFReadStream *_bodyStream;	// 16 = 0x10
    _HMFCFHTTPServerConnection *_connection;	// 24 = 0x18
    NSMutableData *_bodyData;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000003c23f
@property(readonly, nonatomic) NSMutableData *bodyData; // @synthesize bodyData=_bodyData;
@property(readonly, nonatomic) __weak _HMFCFHTTPServerConnection *connection; // @synthesize connection=_connection;
@property(readonly, nonatomic) struct __CFReadStream *bodyStream; // @synthesize bodyStream=_bodyStream;
@property(readonly, nonatomic) struct _CFHTTPServerRequest *requestRef; // @synthesize requestRef=_requestRef;
- (void)setBody:(id)arg1;	// IMP=0x000000000003c13f
- (void)setHeaders:(id)arg1;	// IMP=0x000000000003c08b
- (void)setMethod:(id)arg1;	// IMP=0x000000000003bfd7
- (void)setURL:(id)arg1;	// IMP=0x000000000003bf23
- (id)body;	// IMP=0x000000000003beae
- (id)headerFields;	// IMP=0x000000000003be24
- (id)method;	// IMP=0x000000000003bdf8
- (id)URL;	// IMP=0x000000000003bdcc
- (void)appendBodyData:(id)arg1;	// IMP=0x000000000003bdaf
- (id)responseWithStatusCode:(long long)arg1;	// IMP=0x000000000003bd74
- (id)attributeDescriptions;	// IMP=0x000000000003bc88
- (void)dealloc;	// IMP=0x000000000003bc10
- (id)initWithConnection:(id)arg1 requestRef:(struct _CFHTTPServerRequest *)arg2;	// IMP=0x000000000003bb4b
- (id)init;	// IMP=0x000000000003baa3

@end

