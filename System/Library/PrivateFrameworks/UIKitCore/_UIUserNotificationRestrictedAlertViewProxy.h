//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIUserNotificationRestrictedAlertViewProxy
{
    id _delegate;	// 8 = 0x8
}

+ (id)restrictedProxyForAlertView:(id)arg1;	// IMP=0x001000000152f7f7
- (void).cxx_destruct;	// IMP=0x000000000152fbf6
- (void)forwardInvocation:(id)arg1;	// IMP=0x000000000152fa49
- (_Bool)respondsToSelector:(SEL)arg1;	// IMP=0x000000000152f9de
- (id)methodSignatureForSelector:(SEL)arg1;	// IMP=0x000000000152f90a
- (void)setDelegate:(id)arg1;	// IMP=0x000000000152f84a
- (id)delegate;	// IMP=0x000000000152f835

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

