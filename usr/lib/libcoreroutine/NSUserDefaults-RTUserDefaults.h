//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSUserDefaults.h>

@class NSString;

@interface NSUserDefaults (RTUserDefaults)
- (void)rt_synchronizeDomain:(id)arg1;	// IMP=0x0020000000064db4
- (void)rt_synchronize;	// IMP=0x0020000000064da0
- (id)rt_copyKeyListForDomain:(id)arg1;	// IMP=0x0020000000064d77
- (void)rt_setObject:(id)arg1 forKey:(id)arg2 domain:(id)arg3;	// IMP=0x0020000000064d64
- (id)rt_objectForKey:(id)arg1 domain:(id)arg2;	// IMP=0x0020000000064d4c
- (void)rt_refreshDomain:(id)arg1;	// IMP=0x0020000000064ccf

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

