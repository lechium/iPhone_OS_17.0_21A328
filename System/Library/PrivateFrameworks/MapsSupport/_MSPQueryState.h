//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _MSPQueryState : NSObject
{
    NSArray *_contents;	// 8 = 0x8
    NSArray *_identifiers;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000004776e
@property(readonly) NSArray *identifiers; // @synthesize identifiers=_identifiers;
@property(readonly) NSArray *contents; // @synthesize contents=_contents;
- (id)stateByMovingObjectAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;	// IMP=0x00000000000475d8
- (id)stateByDeletingObjectsAtIndexes:(id)arg1;	// IMP=0x00000000000474ce
- (id)stateByDeletingObjectAtIndex:(unsigned long long)arg1;	// IMP=0x00000000000473e0
- (id)stateByInvokingPreprocessingBlock:(CDUnknownBlockType)arg1 mappingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000047084
- (id)initWithContents:(id)arg1 identifiers:(id)arg2;	// IMP=0x0000000000046fcb
- (id)initWithContainerContents:(id)arg1;	// IMP=0x0000000000046d83

@end
