//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSError, NSMutableURLRequest, NSString, NSURL, NSURLSession, NSUUID, PDURLOperationStats, PDURLResponse;

@interface PDURLRequestOperation
{
    NSError *_error;	// 8 = 0x8
    NSUUID *_requestUUID;	// 16 = 0x10
    unsigned long long _executionsCount;	// 24 = 0x18
    _Bool _wantsToExecute;	// 32 = 0x20
    NSMutableURLRequest *_request;	// 40 = 0x28
    NSString *_responseFailureCause;	// 48 = 0x30
    long long _clsErrorCode;	// 56 = 0x38
    NSURLSession *_session;	// 64 = 0x40
    _Bool _urlRequestAttempted;	// 72 = 0x48
    PDURLResponse *_response;	// 80 = 0x50
    PDURLOperationStats *_stats;	// 88 = 0x58
    NSURL *_URL;	// 96 = 0x60
    NSString *_requestContentType;	// 104 = 0x68
    NSString *_acceptContentType;	// 112 = 0x70
    NSData *_requestData;	// 120 = 0x78
    double _timeoutIntervalForRequest;	// 128 = 0x80
}

+ (id)setAppleInternalHeadersForRequest:(id)arg1;	// IMP=0x004000000010d061
+ (id)appleIDSession;	// IMP=0x001000000010bf75
+ (void)reset;	// IMP=0x001000000010bf02
- (void).cxx_destruct;	// IMP=0x001000000010f058
@property(readonly, nonatomic) NSString *responseFailureCause; // @synthesize responseFailureCause=_responseFailureCause;
@property(nonatomic) long long clsErrorCode; // @synthesize clsErrorCode=_clsErrorCode;
@property(nonatomic) double timeoutIntervalForRequest; // @synthesize timeoutIntervalForRequest=_timeoutIntervalForRequest;
@property(readonly, nonatomic) NSData *requestData; // @synthesize requestData=_requestData;
@property(readonly, nonatomic) NSString *acceptContentType; // @synthesize acceptContentType=_acceptContentType;
@property(readonly, nonatomic) NSString *requestContentType; // @synthesize requestContentType=_requestContentType;
@property(readonly, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) PDURLOperationStats *stats; // @synthesize stats=_stats;
@property(readonly, nonatomic) PDURLResponse *response; // @synthesize response=_response;
@property(nonatomic) _Bool urlRequestAttempted; // @synthesize urlRequestAttempted=_urlRequestAttempted;
- (id)statusReport;	// IMP=0x001000000010eb6d
- (void)handleRequestError;	// IMP=0x001000000010ea67
- (void)handleHTTPStatusCode:(id)arg1;	// IMP=0x001000000010e6bd
- (long long)errorCodeForRequest;	// IMP=0x001000000010e5b6
- (void)markAsFinished;	// IMP=0x001000000010e573
- (void)abort;	// IMP=0x001000000010e533
- (void)abortWithError:(id)arg1;	// IMP=0x001000000010e41a
- (void)flushCachedData;	// IMP=0x001000000010e394
- (void)handleResponseBody:(_Bool)arg1;	// IMP=0x001000000010dfaa
- (void)didCompleteProcessingResponse;	// IMP=0x001000000010df62
- (_Bool)shouldProcessResponseBody;	// IMP=0x001000000010df2b
- (_Bool)processResponse:(id *)arg1;	// IMP=0x001000000010df23
- (void)releaseResponse;	// IMP=0x001000000010def3
- (_Bool)verifyResponse;	// IMP=0x001000000010deeb
- (_Bool)httpRequestHadTimeoutError;	// IMP=0x001000000010ddae
- (_Bool)httpRequestHadServerError;	// IMP=0x001000000010dd4a
@property(readonly, nonatomic) _Bool httpRequestSucceeded;
@property(readonly, nonatomic) _Bool httpRequestCompleted;
@property(readonly, nonatomic) _Bool urlRequestFailed;
- (void)signRequest:(id)arg1 withData:(id)arg2;	// IMP=0x001000000010d92f
- (void)logHTTPHeaders:(id)arg1 withMessage:(id)arg2;	// IMP=0x001000000010d61c
- (id)customRequestHeaders;	// IMP=0x001000000010d614
- (void)setAuthHeadersForRequest:(id)arg1;	// IMP=0x001000000010d568
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x001000000010d079
- (id)createNSURLRequest;	// IMP=0x001000000010cd40
- (_Bool)willAcceptResponseContentType:(id)arg1;	// IMP=0x001000000010cc91
@property(readonly, nonatomic) long long clsErrorCodeForAuthenticationFailure;
- (_Bool)requiresAuth;	// IMP=0x001000000010cc66
@property(readonly, nonatomic) NSString *httpMethod;
- (void)rescheduleOperation;	// IMP=0x001000000010cb13
- (void)execute;	// IMP=0x001000000010c7cb
@property(readonly, nonatomic) _Bool wantsToExecute;
- (id)_createRequestTask;	// IMP=0x001000000010c5c1
- (id)sessionTaskForRequest:(id)arg1 withData:(id)arg2;	// IMP=0x001000000010c49a
- (void)prepareForNextRequestWithResponse:(id)arg1;	// IMP=0x001000000010c271
- (void)prepareForNextRequest;	// IMP=0x001000000010c1e0
@property(readonly, nonatomic) _Bool hasBigResponses;
- (id)operationID;	// IMP=0x001000000010c0db
- (id)initWithDatabase:(id)arg1;	// IMP=0x001000000010c039
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;	// IMP=0x00100000001105f9
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x0010000000110325
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;	// IMP=0x001000000010ff68
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;	// IMP=0x001000000010ff48
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;	// IMP=0x001000000010fcf9
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;	// IMP=0x001000000010fb77
- (void)requestCompletedWith:(id)arg1 error:(id)arg2;	// IMP=0x001000000010f74c
- (void)sessionFailedWithError:(id)arg1;	// IMP=0x001000000010f5ce
- (void)closeSession:(_Bool)arg1;	// IMP=0x001000000010f411
- (id)createSessionIfNeeded;	// IMP=0x001000000010f122
- (void)_simulateResponseWithURL:(id)arg1 statusCode:(long long)arg2 headers:(id)arg3 data:(id)arg4 error:(id)arg5;	// IMP=0x00100000001107cf
- (void)_simulateResumeForSessionTask:(id)arg1 response:(id)arg2 executionCount:(long long)arg3;	// IMP=0x00100000001107c9

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

