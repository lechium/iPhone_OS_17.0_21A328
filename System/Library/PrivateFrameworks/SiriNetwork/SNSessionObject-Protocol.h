//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SiriNetwork/NSObject-Protocol.h>

@class NSObject, NSString;
@protocol OS_dispatch_data;

@protocol SNSessionObject <NSObject>
@property(copy, nonatomic) NSString *refId;
@property(copy, nonatomic) NSString *aceId;
- (_Bool)supportedByRemoteLimitedSession;
- (_Bool)supportedByLocalSession;
- (void)setSessionRequestId:(NSString *)arg1;
- (NSString *)requestId;
- (void)logDiagnostics;
- (_Bool)isProvisional;
- (_Bool)isRestartable;
- (_Bool)isRetryable;
- (_Bool)bufferingAllowedDuringActiveSession;
- (NSObject<OS_dispatch_data> *)serializedAceDataError:(id *)arg1;
@end
