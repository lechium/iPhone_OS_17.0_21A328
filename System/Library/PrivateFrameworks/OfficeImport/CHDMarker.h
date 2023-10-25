//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDMarker : NSObject
{
    unsigned int mSize;	// 8 = 0x8
    int mStyle;	// 12 = 0xc
    OADGraphicProperties *mGraphicProperties;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000038e7fd
- (id)description;	// IMP=0x000000000038e7bf
- (void)setSize:(unsigned int)arg1;	// IMP=0x000000000018ba64
- (unsigned int)size;	// IMP=0x000000000018bc7f
- (void)setGraphicProperties:(id)arg1;	// IMP=0x000000000018ba20
- (id)graphicProperties;	// IMP=0x000000000018bc2e
- (void)setStyle:(int)arg1;	// IMP=0x000000000018ba6d
- (int)style;	// IMP=0x000000000018bc88
- (id)init;	// IMP=0x000000000018b664

@end
