//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "ISIcon.h"

@class ISImageCache, NSArray;

__attribute__((visibility("hidden")))
@interface ISImageBagIcon : ISIcon
{
    NSArray *_images;	// 16 = 0x10
    NSArray *_decorations;	// 24 = 0x18
    ISImageCache *_imageCache;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000022f5a
@property(retain) ISImageCache *imageCache; // @synthesize imageCache=_imageCache;
- (id)decorations;	// IMP=0x0000000000022f22
@property(readonly) NSArray *images; // @synthesize images=_images;
- (void)getImageForImageDescriptor:(id)arg1 completion:(CDUnknownBlockType)arg2;	// IMP=0x0000000000022e19
- (id)imageForImageDescriptor:(id)arg1;	// IMP=0x0000000000022cca
- (void)_prepareImagesForImageDescriptors:(id)arg1;	// IMP=0x0000000000022a42
- (id)_generateImageWithDescriptor:(id)arg1;	// IMP=0x00000000000227c3
- (id)initWithImageBag:(id)arg1;	// IMP=0x0000000000022702
- (id)initWithImages:(id)arg1 decorations:(id)arg2;	// IMP=0x000000000002262b
- (id)initWithImages:(id)arg1;	// IMP=0x0000000000022612

@end
