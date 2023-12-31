//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface ASCArtwork : NSObject
{
    double _width;	// 8 = 0x8
    double _height;	// 16 = 0x10
    NSString *_decoration;	// 24 = 0x18
    NSString *_preferredCrop;	// 32 = 0x20
    NSString *_preferredFormat;	// 40 = 0x28
    id _dataSource;	// 48 = 0x30
    UIImage *_embeddedImage;	// 56 = 0x38
}

+ (_Bool)supportsSecureCoding;	// IMP=0x002000000000849b
- (void).cxx_destruct;	// IMP=0x00200000000091b6
@property(readonly, nonatomic) UIImage *embeddedImage; // @synthesize embeddedImage=_embeddedImage;
@property(readonly, nonatomic) id dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, copy, nonatomic) NSString *preferredFormat; // @synthesize preferredFormat=_preferredFormat;
@property(readonly, copy, nonatomic) NSString *preferredCrop; // @synthesize preferredCrop=_preferredCrop;
@property(readonly, copy, nonatomic) NSString *decoration; // @synthesize decoration=_decoration;
@property(readonly, nonatomic) double height; // @synthesize height=_height;
@property(readonly, nonatomic) double width; // @synthesize width=_width;
- (id)makeURLWithSubstitutions:(id)arg1;	// IMP=0x0010000000008fe5
- (id)description;	// IMP=0x0010000000008e61
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000008abf
- (unsigned long long)hash;	// IMP=0x0010000000008981
@property(readonly, copy, nonatomic) NSString *URLTemplate;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x00100000000088c2
- (void)encodeWithCoder:(id)arg1;	// IMP=0x0010000000008769
- (id)initWithCoder:(id)arg1;	// IMP=0x00100000000084a3
- (id)initWithURLTemplate:(id)arg1 width:(double)arg2 height:(double)arg3 decoration:(id)arg4 preferredCrop:(id)arg5 preferredFormat:(id)arg6;	// IMP=0x0010000000008366

@end

