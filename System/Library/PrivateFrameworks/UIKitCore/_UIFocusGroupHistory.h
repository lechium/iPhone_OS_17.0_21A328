//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface _UIFocusGroupHistory : NSObject
{
    NSMapTable *_groupToItemMap;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x0000000000e15ef0
- (void)_uiktest_clearHistory;	// IMP=0x0000000000e15eda
- (void)setLastFocusedItem:(id)arg1 forGroupIdentifier:(id)arg2;	// IMP=0x0000000000e15d8c
- (id)lastFocusedItemForGroupIdentifier:(id)arg1;	// IMP=0x0000000000e15d76
- (id)init;	// IMP=0x0000000000e15ca2

@end

