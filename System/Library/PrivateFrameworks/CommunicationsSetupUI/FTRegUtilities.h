//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FTRegUtilities : NSObject
{
}

+ (void)authorizationController:(id)arg1 authorizedAccount:(_Bool)arg2;	// IMP=0x008000000000336a
+ (void)changePasswordControllerDidFinish:(id)arg1 withAppleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x0080000000003093
+ (void)changePasswordControllerDidCancel:(id)arg1;	// IMP=0x008000000000304c
+ (id)standaloneNewPasswordControllerWithRegController:(id)arg1 appleID:(id)arg2;	// IMP=0x0080000000002ed4
+ (id)standaloneAuthorizationControllerWithRegController:(id)arg1 authID:(id)arg2 token:(id)arg3;	// IMP=0x0080000000002d41
+ (id)serviceWithType:(long long)arg1;	// IMP=0x0080000000002cf0

@end

