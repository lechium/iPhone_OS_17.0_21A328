//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class UIImage;

__attribute__((visibility("hidden")))
@interface _UIImageSerializationWrapper : NSObject
{
    UIImage *_image;	// 8 = 0x8
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000009e40e2
- (void).cxx_destruct;	// IMP=0x00000000009e40ea
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000009e40b3
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000009e4013
- (Class)classForCoder;	// IMP=0x00000000009e4005
- (id)initWithImage:(id)arg1;	// IMP=0x00000000009e3fab

@end
