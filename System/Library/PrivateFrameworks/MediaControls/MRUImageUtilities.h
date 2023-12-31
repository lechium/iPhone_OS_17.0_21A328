//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRUImageUtilities : NSObject
{
}

+ (long long)subsampleFactorForMaxPixelSize:(long long)arg1 imageSize:(struct CGSize)arg2;	// IMP=0x0040000000071bb9
+ (struct CGSize)sizeFromSource:(struct CGImageSource *)arg1;	// IMP=0x0040000000071a9f
+ (id)resizedImage:(id)arg1 forFittingSize:(struct CGSize)arg2;	// IMP=0x0040000000071669
+ (_Bool)shouldResizeImage:(id)arg1 forFittingSize:(struct CGSize)arg2;	// IMP=0x00400000000715eb
+ (_Bool)shouldTranscodeImage:(id)arg1;	// IMP=0x00400000000715cf
+ (id)derivedSourceImageForImage:(id)arg1;	// IMP=0x00400000000712f0
+ (id)formattedImageForIdentifier:(id)arg1 size:(struct CGSize)arg2;	// IMP=0x0040000000071152
+ (id)formatImage:(id)arg1 withIdentifier:(id)arg2 forDisplayAtSize:(struct CGSize)arg3 useCache:(_Bool)arg4;	// IMP=0x0040000000070648
+ (id)formatImage:(id)arg1 withIdentifier:(id)arg2 forDisplayAtSize:(struct CGSize)arg3;	// IMP=0x0040000000070626
+ (id)formatImage:(id)arg1 forDisplayAtSize:(struct CGSize)arg2;	// IMP=0x0040000000070605
+ (id)jpegDataForImage:(id)arg1;	// IMP=0x00400000000704f3
+ (_Bool)imageIsJPEG:(id)arg1;	// IMP=0x004000000007044f
+ (id)sourceDataForImage:(id)arg1;	// IMP=0x0040000000070422
+ (void)clearCache;	// IMP=0x00400000000703de
+ (id)cache;	// IMP=0x00400000000700b8

@end

