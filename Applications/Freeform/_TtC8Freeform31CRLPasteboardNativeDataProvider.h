//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSArray;

@interface _TtC8Freeform31CRLPasteboardNativeDataProvider : NSObject
{
    MISSING_TYPE *pasteboardDataManaging;	// 8 = 0x8
    MISSING_TYPE *itemMaxSize;	// 48 = 0x30
    MISSING_TYPE *metadataData;	// 56 = 0x38
    MISSING_TYPE *objectsData;	// 72 = 0x48
    MISSING_TYPE *assetPasteboardTypeToURLMap;	// 88 = 0x58
    MISSING_TYPE *_promisedDataTypes;	// 96 = 0x60
    MISSING_TYPE *fulfilledPromises;	// 104 = 0x68
}

- (void).cxx_destruct;	// IMP=0x0040000000ba72c0
- (id)init;	// IMP=0x0010000000ba7260
- (id)fulfillPromisesForPasteboardType:(id)arg1;	// IMP=0x0010000000ba71d0
@property(nonatomic, readonly) NSArray *promisedDataTypes;

@end

