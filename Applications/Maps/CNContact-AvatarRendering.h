//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Contacts/CNContact.h>

@class NSString;

@interface CNContact (AvatarRendering)
+ (_Bool)_maps_addressBookAllowed;	// IMP=0x0020000000ac60a8
+ (void)_maps_imageForUnkonwnWithDiameter:(double)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c32096
+ (void)_maps_imageForNoContactWithDiameter:(double)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c31ef3
- (struct CGImage *)imageForCustomImageKey:(unsigned long long)arg1 suggestedSize:(struct CGSize)arg2 contentScale:(float)arg3;	// IMP=0x0010000000ac6056
- (id)avatarImageWithSize:(struct CGSize)arg1 scale:(double)arg2 rightToLeft:(_Bool)arg3;	// IMP=0x0010000000ac5ecd
- (id)_maps_spokenNameForNavigation;	// IMP=0x0010000000c32239
- (void)_maps_imageForContactWithDiameter:(double)arg1 scale:(double)arg2 completion:(CDUnknownBlockType)arg3;	// IMP=0x0010000000c31d39
@property(readonly, nonatomic) _Bool isMeCard;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
