//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@protocol NSObject><NSCopying;

__attribute__((visibility("hidden")))
@interface VNCoreMLRequestConfiguration
{
    unsigned long long _imageCropAndScaleOption;	// 8 = 0x8
    id <NSObject><NSCopying> _modelCachingIdentifier;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000026ca8b
@property(copy, nonatomic) id <NSObject><NSCopying> modelCachingIdentifier; // @synthesize modelCachingIdentifier=_modelCachingIdentifier;
@property(nonatomic) unsigned long long imageCropAndScaleOption; // @synthesize imageCropAndScaleOption=_imageCropAndScaleOption;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000000026c9bd
- (void)updateWithPropertiesOfModel:(id)arg1;	// IMP=0x000000000026c95a
- (id)initWithRequestClass:(Class)arg1;	// IMP=0x000000000026c917

@end

