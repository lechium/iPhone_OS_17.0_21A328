//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AFLinkedListItem, NSMutableDictionary;

@interface ADNotificationOrderedDictionary : NSObject
{
    NSMutableDictionary *_allBulletins;	// 8 = 0x8
    AFLinkedListItem *_orderedBulletinsHead;	// 16 = 0x10
    AFLinkedListItem *_orderedBulletinsTail;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000002f34c2
- (void)removeBulletinItem:(id)arg1;	// IMP=0x00100000002f3437
- (id)appendItemWithBulletin:(id)arg1;	// IMP=0x00100000002f33a6
- (void)enumerateBulletinsAfterBulletinWithNotificationID:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x00100000002f3255
- (void)removeBulletinWithInternalID:(id)arg1;	// IMP=0x00100000002f31d2
- (void)setBulletin:(id)arg1 forInternalID:(id)arg2;	// IMP=0x00100000002f3107
- (id)allBulletins;	// IMP=0x00100000002f2f3d
- (id)bulletinWithNotificationID:(id)arg1;	// IMP=0x00100000002f2e1e
- (id)bulletinForInternalID:(id)arg1;	// IMP=0x00100000002f2dca
- (id)init;	// IMP=0x00100000002f2d74

@end

