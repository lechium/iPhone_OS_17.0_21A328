//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface GQDWPTextLabel : NSObject
{
    struct __CFString *mFormat;	// 8 = 0x8
    int mLabelType;	// 16 = 0x10
    int mFirst;	// 20 = 0x14
}

- (int)first;	// IMP=0x00000000000230bd
- (int)labelType;	// IMP=0x00000000000230b4
- (struct __CFString *)format;	// IMP=0x00000000000230aa
- (void)dealloc;	// IMP=0x0000000000023070
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;	// IMP=0x0000000000022f84

@end
