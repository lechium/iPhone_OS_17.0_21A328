//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MLModel, NSString, SNComposedDetector;

__attribute__((visibility("hidden")))
@interface SNDetectorVariant : NSObject
{
    long long _type;	// 8 = 0x8
    SNComposedDetector *_composedDetector;	// 16 = 0x10
    NSString *_detectorIdentifier;	// 24 = 0x18
    MLModel *_endToEndDetectorModel;	// 32 = 0x20
}

+ (_Bool)supportsSecureCoding;	// IMP=0x00100000000b56bf
- (void).cxx_destruct;	// IMP=0x00000000000b5b67
- (unsigned long long)hash;	// IMP=0x00000000000b5acb
- (_Bool)isEqual:(id)arg1;	// IMP=0x00000000000b5964
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00000000000b58bb
- (void)encodeWithCoder:(id)arg1;	// IMP=0x00000000000b57f0
- (id)initWithCoder:(id)arg1;	// IMP=0x00000000000b56c7
- (id)init;	// IMP=0x00000000000b54ff

@end

