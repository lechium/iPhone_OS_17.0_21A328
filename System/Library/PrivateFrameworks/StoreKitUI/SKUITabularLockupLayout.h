//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface SKUITabularLockupLayout : NSObject
{
    NSArray *_columns;	// 8 = 0x8
}

+ (id)fontForLabelViewElement:(id)arg1 context:(id)arg2;	// IMP=0x00600000002f91c1
- (void).cxx_destruct;	// IMP=0x00000000002f951b
@property(readonly, nonatomic) NSArray *columns; // @synthesize columns=_columns;
- (void)sizeColumnsToFitWidth:(double)arg1 context:(id)arg2;	// IMP=0x00000000002f9304
- (id)initWithLockup:(id)arg1 context:(id)arg2;	// IMP=0x00000000002f8f39

@end

