//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSData.h>

@interface NSData (FamilyCircle)
- (id)fa_dictionaryFromPlistData;	// IMP=0x00900000000188a9
- (id)_faCircularImageDataWithDiameter:(double)arg1 cropRect:(struct CGRect)arg2;	// IMP=0x00900000000186c2
- (struct CGContext *)_faCreateContextWithImage:(struct CGImage *)arg1 crop:(struct CGRect)arg2 diameter:(double)arg3;	// IMP=0x00900000000184f8
- (struct CGRect)_faTranformedRectForImageSize:(struct CGSize)arg1 cropRect:(struct CGRect)arg2 diameter:(double)arg3;	// IMP=0x009000000001844c
- (struct CGImage *)_faCreateImageRef;	// IMP=0x00900000000183d8
- (id)_faCircularImageDataWithDiameter:(double)arg1;	// IMP=0x00900000000183a6
@end
