//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class MISSING_TYPE;

@interface UIColor (SCNAdditions)
+ (id)scn_colorWithC3DColor:(const struct C3DColor4 *)arg1;	// IMP=0x0050000000167a8a
+ (id)scn_colorWithModelIORed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 options:(id)arg5;	// IMP=0x0050000000167917
+ (id)scn_colorWithLinearDisplayP3Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x0050000000167891
+ (id)scn_colorWithLinearSRGBRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;	// IMP=0x005000000016780b
+ (id)color:(double)arg1:(double)arg2:(double)arg3:(double)arg4;	// IMP=0x00500000002ceab0
- (struct C3DColor4)scn_C3DColorIgnoringColorSpace:(_Bool)arg1 success:(_Bool *)arg2;	// IMP=0x0010000000167ad4
- (MISSING_TYPE *)scn_colorComponentsForModelIO;	// IMP=0x0010000000167a70
- (double)a;	// IMP=0x00100000002ceb39
- (double)b;	// IMP=0x00100000002ceb15
- (double)g;	// IMP=0x00100000002ceaed
- (double)r;	// IMP=0x00100000002ceac9
@end

