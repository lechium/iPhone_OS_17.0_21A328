//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PBUserAuthorizationLedger : NSObject
{
    NSMutableDictionary *_authorizationRecords;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x002000000001adc1
@property(readonly, retain) NSMutableDictionary *authorizationRecords; // @synthesize authorizationRecords=_authorizationRecords;
- (unsigned long long)authorizationDecisionForAuditTokenInfo:(id)arg1 timestamp:(unsigned long long)arg2;	// IMP=0x001000000001ac02
- (void)recordUserAuthorizationDecision:(_Bool)arg1 auditTokenInfo:(id)arg2;	// IMP=0x001000000001ab1b
- (id)init;	// IMP=0x001000000001aac5

@end

