//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "DDAction.h"

__attribute__((visibility("hidden")))
@interface DDOpenMapsAction : DDAction
{
}

+ (_Bool)actionAvailableForCachedEvent:(id)arg1;	// IMP=0x0080000000040951
+ (_Bool)actionAvailableForContact:(id)arg1;	// IMP=0x0080000000040909
- (_Bool)canBePerformedByOpeningURL;	// IMP=0x0000000000040ee5
- (void)performFromView:(id)arg1;	// IMP=0x0000000000040e67
- (id)notificationURL;	// IMP=0x0000000000040c6c
- (id)notificationIconBundleIdentifier;	// IMP=0x0000000000040c5f
- (id)notificationTitle;	// IMP=0x0000000000040acf
- (id)compactTitle;	// IMP=0x00000000000409ce
- (id)variantIconName;	// IMP=0x00000000000409c1
- (id)iconName;	// IMP=0x00000000000409b4
- (id)localizedName;	// IMP=0x000000000004099c

@end

