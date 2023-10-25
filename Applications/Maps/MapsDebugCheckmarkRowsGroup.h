//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface MapsDebugCheckmarkRowsGroup : NSObject
{
    NSMutableArray *_heldRows;	// 8 = 0x8
    struct __CFArray *_weakRows;	// 16 = 0x10
    _Bool _allowMultipleSelection;	// 24 = 0x18
    CDUnknownBlockType _selectionChanged;	// 32 = 0x20
    NSString *_groupIdentifier;	// 40 = 0x28
    unsigned long long _minimumSelectionCount;	// 48 = 0x30
}

+ (id)rowsGroupContainingRows:(out id *)arg1 withContent:(CDUnknownBlockType)arg2 get:(CDUnknownBlockType)arg3 set:(CDUnknownBlockType)arg4;	// IMP=0x00400000001cd169
- (void).cxx_destruct;	// IMP=0x00200000001cdafa
@property(nonatomic) unsigned long long minimumSelectionCount; // @synthesize minimumSelectionCount=_minimumSelectionCount;
@property(nonatomic, getter=allowsMultipleSelection) _Bool allowMultipleSelection; // @synthesize allowMultipleSelection=_allowMultipleSelection;
@property(copy, nonatomic) CDUnknownBlockType selectionChanged; // @synthesize selectionChanged=_selectionChanged;
@property(readonly, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
- (void)update;	// IMP=0x00100000001cd9d5
@property(readonly, nonatomic) _Bool canDeselectRows;
- (unsigned long long)selectedRowsCount;	// IMP=0x00100000001cd850
@property(readonly, nonatomic) NSArray *rows;
- (void)checkmarkRowWillInvalidate:(id)arg1;	// IMP=0x00100000001cd79f
- (void)checkmarkRowDidChangeChecked:(id)arg1;	// IMP=0x00100000001cd71f
- (void)addRow:(id)arg1;	// IMP=0x00100000001cd68c
- (id)addRowWithTitle:(id)arg1 subtitle:(id)arg2 value:(id)arg3;	// IMP=0x00100000001cd5c5
- (id)addRowWithTitle:(id)arg1 value:(id)arg2;	// IMP=0x00100000001cd5ae
- (id)weakRows;	// IMP=0x00100000001cd5a0
- (void)dealloc;	// IMP=0x00100000001cd559
- (id)_initWithHeldRows;	// IMP=0x00100000001cd51a
- (id)init;	// IMP=0x00100000001cd4c7
- (id)_relinquishOwnershipOfHeldRows;	// IMP=0x00100000001cd12d

@end
