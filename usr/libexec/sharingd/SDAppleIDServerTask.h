//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURLRequest, NSURLSession;
@protocol OS_dispatch_queue;

@interface SDAppleIDServerTask : NSObject
{
    _Bool _activated;	// 8 = 0x8
    _Bool _invalidated;	// 9 = 0x9
    NSObject<OS_dispatch_queue> *_dispatchQueue;	// 16 = 0x10
    CDUnknownBlockType _responseHandler;	// 24 = 0x18
    NSString *_appleID;	// 32 = 0x20
    NSString *_gsToken;	// 40 = 0x28
    NSURLSession *_session;	// 48 = 0x30
    NSDictionary *_taskInfo;	// 56 = 0x38
    long long _type;	// 64 = 0x40
    NSURLRequest *_urlRequest;	// 72 = 0x48
}

- (void).cxx_destruct;	// IMP=0x00200000000ff149
@property(retain, nonatomic) NSURLRequest *urlRequest; // @synthesize urlRequest=_urlRequest;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, nonatomic) NSDictionary *taskInfo; // @synthesize taskInfo=_taskInfo;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(nonatomic) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSString *gsToken; // @synthesize gsToken=_gsToken;
@property(readonly, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) _Bool activated; // @synthesize activated=_activated;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_sendRequest;	// IMP=0x00100000000feec8
- (id)_parseServerResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000fedbb
- (id)_parseGetMyInfoResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000fe674
- (id)_parseFindPersonResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000fdf3d
- (id)_parseFetchCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000fd626
- (id)_parseCreateCertificateResponse:(id)arg1 error:(int *)arg2;	// IMP=0x00100000000fd25b
- (void)_handleTaskResponse:(id)arg1 withData:(id)arg2 error:(int)arg3;	// IMP=0x00100000000fc9bf
- (void)_invalidate;	// IMP=0x00100000000fc8cd
- (void)_handleServerError:(long long)arg1 withStatusCode:(long long)arg2 nextSuggestedAttemptDelay:(long long)arg3;	// IMP=0x00100000000fc575
- (void)_handleGSTokenIsAvailable;	// IMP=0x00100000000fc440
- (void)_handleURLRequestIsAvailable;	// IMP=0x00100000000fc0e0
- (void)invalidate;	// IMP=0x00100000000fc07f
- (void)_activate;	// IMP=0x00100000000fbf23
- (void)_urlRequestWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fbdd0
- (void)_handleURLIsAvailable:(id)arg1 error:(int)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x00100000000fbb12
- (void)_urlWithCompletion:(CDUnknownBlockType)arg1;	// IMP=0x00100000000fb71c
- (_Bool)_isTaskInfoValid;	// IMP=0x00100000000fb1c2
- (void)_callResponseHandlerWithInfo:(id)arg1 error:(int)arg2;	// IMP=0x00100000000fb1ab
- (void);	// IMP=0x00100000000fb092
- (void)activate;	// IMP=0x00100000000fb02f
- (id)description;	// IMP=0x00100000000faff6
- (id)initWithType:(long long)arg1 appleID:(id)arg2 info:(id)arg3;	// IMP=0x00100000000fae64

@end

