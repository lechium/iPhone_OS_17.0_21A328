//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface SKUIProductPageProductInfo : NSObject
{
    NSMutableArray *_labels;	// 8 = 0x8
    NSMutableArray *_values;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000039a9b2
@property(readonly, nonatomic) long long numberOfEntries;
- (void)enumerateEntriesWithBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000039a885
- (id)initWithInfoSectionDictionaries:(id)arg1;	// IMP=0x000000000039a555

@end

