//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class EDWorkbook, NSMutableArray;

__attribute__((visibility("hidden")))
@interface EDProcessors : NSObject
{
    EDWorkbook *mWorkbook;	// 8 = 0x8
    NSMutableArray *mProcessors;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000003a5d8f
- (void)applyProcessorsWithSheet:(id)arg1;	// IMP=0x000000000012e2ea
- (void)markObject:(id)arg1 processor:(Class)arg2;	// IMP=0x0000000000126109
- (void)removeAllObjects;	// IMP=0x00000000001162c5
- (void)removeProcessorClass:(Class)arg1;	// IMP=0x00000000003a5cd8
- (_Bool)hasProcessors;	// IMP=0x00000000003a5cbb
- (void)addProcessorClass:(Class)arg1;	// IMP=0x00000000001162db
- (id)initWithWorkbook:(id)arg1;	// IMP=0x000000000011612e

@end

