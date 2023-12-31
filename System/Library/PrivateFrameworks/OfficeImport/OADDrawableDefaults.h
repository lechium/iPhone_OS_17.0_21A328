//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class OADDrawableCategoryDefaults;

__attribute__((visibility("hidden")))
@interface OADDrawableDefaults : NSObject
{
    OADDrawableCategoryDefaults *mShapeDefaults;	// 8 = 0x8
    OADDrawableCategoryDefaults *mLineDefaults;	// 16 = 0x10
    OADDrawableCategoryDefaults *mTextDefaults;	// 24 = 0x18
}

- (void).cxx_destruct;	// IMP=0x000000000032a063
@property(retain, nonatomic) OADDrawableCategoryDefaults *textDefaults; // @synthesize textDefaults=mTextDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *lineDefaults; // @synthesize lineDefaults=mLineDefaults;
@property(retain, nonatomic) OADDrawableCategoryDefaults *shapeDefaults; // @synthesize shapeDefaults=mShapeDefaults;
- (id)description;	// IMP=0x0000000000329fd4
- (id)addTextDefaults;	// IMP=0x0000000000329f99
- (id)addLineDefaults;	// IMP=0x0000000000329f5e
- (id)addShapeDefaults;	// IMP=0x0000000000329f23
- (void)addDefaults;	// IMP=0x0000000000329e7a
- (_Bool)isEmpty;	// IMP=0x0000000000329e59

@end

