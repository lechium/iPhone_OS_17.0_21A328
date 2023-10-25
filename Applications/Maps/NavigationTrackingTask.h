//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface NavigationTrackingTask : NSObject
{
}

+ (long long)creationPreference;	// IMP=0x0020000000bd06a8
- (void)trackNavigationStarted:(_Bool)arg1 purpose:(int)arg2 originResolvedType:(int)arg3 destinationResolvedType:(int)arg4;	// IMP=0x0020000000bd0f73
- (void)platformController:(id)arg1 didChangeCurrentSessionFromSession:(id)arg2 toSession:(id)arg3;	// IMP=0x0010000000bd06b9
- (void);	// IMP=0x0010000000bd06b3

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
