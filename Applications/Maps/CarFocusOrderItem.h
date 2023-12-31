//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;
@protocol UIFocusItem;

@interface CarFocusOrderItem : NSObject
{
    _Bool _flipForRHD;	// 8 = 0x8
    id <UIFocusItem> _focusItem;	// 16 = 0x10
    NSNumber *_representativeItemTypeNumber;	// 24 = 0x18
}

+ (id)itemWithRepresentativeItemType:(unsigned long long)arg1;	// IMP=0x0040000000a61faf
+ (id)itemWithFocusItem:(id)arg1;	// IMP=0x0010000000a61f45
- (void).cxx_destruct;	// IMP=0x0020000000a62191
@property(retain, nonatomic) NSNumber *representativeItemTypeNumber; // @synthesize representativeItemTypeNumber=_representativeItemTypeNumber;
@property(nonatomic) _Bool flipForRHD; // @synthesize flipForRHD=_flipForRHD;
@property(retain, nonatomic) id <UIFocusItem> focusItem; // @synthesize focusItem=_focusItem;
- (void)ifFocusItem:(CDUnknownBlockType)arg1 ifRepresentativeItem:(CDUnknownBlockType)arg2;	// IMP=0x0010000000a620d3
- (id)itemFlippedForRHD;	// IMP=0x0010000000a62059
@property(readonly, nonatomic) unsigned long long representativeItemType;

@end

