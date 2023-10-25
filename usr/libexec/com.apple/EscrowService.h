//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBEscrowOperationLogger;

@interface EscrowService : NSObject
{
    SBEscrowOperationLogger *_operationsLogger;	// 8 = 0x8
}

+ (_Bool)isFatalError:(id)arg1;	// IMP=0x0020000000052014
+ (id)createEscrowBlobWithCertificate:(id)arg1 escrowRequest:(id)arg2 error:(id *)arg3;	// IMP=0x0010000000051c1d
+ (id)doubleEnrollmentRecordFromPrimaryRecord:(id)arg1;	// IMP=0x001000000005183b
+ (id)certificateRequest:(id)arg1 duplicate:(_Bool)arg2 error:(id *)arg3;	// IMP=0x001000000004d537
- (void).cxx_destruct;	// IMP=0x0010000000057b25
@property(readonly, nonatomic) SBEscrowOperationLogger *operationsLogger; // @synthesize operationsLogger=_operationsLogger;
- (void)logRecoveryResults:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000579a2
- (void)verifyCertificateWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057514
- (void)getCountrySMSCodesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000057328
- (void)listSMSTargetsWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005713c
- (void)changeSMSTargetWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056e88
- (void)startSMSChallengeWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000056b72
- (void)updateRecordMetadataWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000000566d0
- (void)_deleteRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005632b
- (void)deleteRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000005593d
- (void)ttrForPCSDataMatchFailure:(id)arg1;	// IMP=0x001000000005525e
- (void)_performDoubleRecoveryStingrayWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000054917
- (void)_performDoubleRecoveryICDPWithRequest:(id)arg1 primaryResponse:(id)arg2;	// IMP=0x0010000000053ee2
- (void)_performPostEnrollSilentRecoveryWithRequest:(id)arg1;	// IMP=0x0010000000053b47
- (void)recoverRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0010000000053535
- (void)_recoverActualRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052a6e
- (void)_srpInitHelper:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000052798
- (void)_recoverWithVersion:(int)arg1 req:(id)arg2 duplicate:(_Bool)arg3 sesWrapper:(id)arg4 srpInitResponse:(id)arg5 reply:(CDUnknownBlockType)arg6;	// IMP=0x0010000000052033
- (_Bool)processPrerecord:(id)arg1 outerRequest:(id)arg2 escrowRequest:(id)arg3 error:(id *)arg4;	// IMP=0x00100000000512c3
- (void)storeRecordWithCertDataRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x0010000000050957
- (_Bool)_invalidateEscrowCache:(id)arg1 error:(id *)arg2;	// IMP=0x001000000005075c
- (void)_storeRecordWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000005012c
- (void)storeRecordWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004f638
- (id)fetchCachedCertificateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ee1e
- (_Bool)cacheStoredCertificate:(id)arg1 error:(id *)arg2;	// IMP=0x001000000004ec2b
- (id)keychainBaseQueryWithEnvironment:(id)arg1 andBaseURL:(id)arg2;	// IMP=0x001000000004eac3
- (void)fetchCertificatesAndDuplicateRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e21c
- (void)fetchCertificatesWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004e158
- (void)_fetchCertificatesWithRequest:(id)arg1 duplicate:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;	// IMP=0x001000000004dccd
- (void)getAccountInfoWithRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000004d2b6
- (id)initWithOperationsLogger:(id)arg1;	// IMP=0x001000000004d238
- (id)_getBypassToken;	// IMP=0x001000000004d097
- (void)_removeBypassToken;	// IMP=0x001000000004cf7b
- (void)_saveBypassToken:(id)arg1;	// IMP=0x001000000004ce2c

@end
