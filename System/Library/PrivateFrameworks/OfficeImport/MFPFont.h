//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MFPFont : NSObject
{
    float mSize;	// 8 = 0x8
    int mUnit;	// 12 = 0xc
    unsigned int mFlags;	// 16 = 0x10
    NSString *mName;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x0000000000364612
- (struct __CTFont *)createCTFontWithGraphics:(id)arg1;	// IMP=0x00000000003644dc
- (void)setName:(id)arg1;	// IMP=0x00000000003644cb
- (id)name;	// IMP=0x00000000003644bd
- (void)setFlags:(unsigned int)arg1;	// IMP=0x00000000003644b4
- (unsigned int)flags;	// IMP=0x00000000003644ab
- (void)setUnit:(int)arg1;	// IMP=0x00000000003644a2
- (int)unit;	// IMP=0x0000000000364499
- (void)setSize:(float)arg1;	// IMP=0x000000000036448e
- (float)size;	// IMP=0x0000000000364483

@end

