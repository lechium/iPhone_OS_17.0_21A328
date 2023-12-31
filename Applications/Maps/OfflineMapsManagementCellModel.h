//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MapsDebugTableRow;

@interface OfflineMapsManagementCellModel : NSObject
{
    _Bool _enabled;	// 8 = 0x8
    unsigned long long _cellType;	// 16 = 0x10
    MapsDebugTableRow *_tableRow;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x00200000001dc966
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(retain, nonatomic) MapsDebugTableRow *tableRow; // @synthesize tableRow=_tableRow;
@property(nonatomic) unsigned long long cellType; // @synthesize cellType=_cellType;
- (_Bool)isEqual:(id)arg1;	// IMP=0x00100000001dc80e
- (unsigned long long)hash;	// IMP=0x00100000001dc7ca
- (id)identifier;	// IMP=0x00100000001dc714
- (id)init;	// IMP=0x00100000001dc6c2

@end

