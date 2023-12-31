//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface PixelBufferPoolKey : NSObject
{
    unsigned int _pixelFormatType;	// 8 = 0x8
    struct CGSize _frameSize;	// 16 = 0x10
}

@property(readonly, nonatomic) unsigned int pixelFormatType; // @synthesize pixelFormatType=_pixelFormatType;
@property(readonly, nonatomic) struct CGSize frameSize; // @synthesize frameSize=_frameSize;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000011859b
- (unsigned long long)hash;	// IMP=0x000000000011851f
- (_Bool)isEqual:(id)arg1;	// IMP=0x0000000000118413
- (id)initWithSize:(struct CGSize)arg1 pixelFormatType:(unsigned int)arg2;	// IMP=0x00000000001183ba

@end

