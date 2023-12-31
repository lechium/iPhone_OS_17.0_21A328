//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CNContactAction.h"

@class CNContactStore, CNContainer;

__attribute__((visibility("hidden")))
@interface CNContactEnableGuardianRestrictionsAction : CNContactAction
{
    CNContainer *_container;	// 8 = 0x8
    CNContactStore *_contactStore;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000002d3cbc
@property(readonly, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(readonly, nonatomic) CNContainer *container; // @synthesize container=_container;
- (id)initWithContact:(id)arg1 inContainer:(id)arg2 contactStore:(id)arg3;	// IMP=0x00000000002d3be4

@end

