//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface AKGrandslamTokenUpdater : NSObject
{
}

+ (_Bool)shouldUpdateSynchronouslyWith:(id)arg1;	// IMP=0x00400000000ae086
- (_Bool)_isTouchIDRequiredForGrandSlamServiceTokenWithID:(id)arg1;	// IMP=0x00400000000aeefa
- (void)_updateCredentialForSavedAIDAAccount:(id)arg1 accountStore:(id)arg2 withNewTokens:(id)arg3;	// IMP=0x00100000000ae91d
- (void)_updateWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000ae134
- (void)updateGrandSlamServiceTokensWithRequest:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000adf7d

@end
