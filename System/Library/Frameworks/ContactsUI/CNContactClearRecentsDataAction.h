//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactRecentsReference, CNUICoreRecentsManager;

__attribute__((visibility("hidden")))
@interface CNContactClearRecentsDataAction : CNContactAction
{
    CNContactRecentsReference *_recentsData;	// 8 = 0x8
    CNUICoreRecentsManager *_coreRecentsManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000000c3287
@property(readonly, nonatomic) CNUICoreRecentsManager *coreRecentsManager; // @synthesize coreRecentsManager=_coreRecentsManager;
@property(readonly, nonatomic) CNContactRecentsReference *recentsData; // @synthesize recentsData=_recentsData;
- (void)performActionWithSender:(id)arg1;	// IMP=0x00000000000c3106
- (_Bool)canPerformAction;	// IMP=0x00000000000c30fe
- (_Bool)isDestructive;	// IMP=0x00000000000c30f6
- (id)title;	// IMP=0x00000000000c309a
- (id)initWithRecentsData:(id)arg1 coreRecentsManager:(id)arg2;	// IMP=0x00000000000c2fe9

@end

