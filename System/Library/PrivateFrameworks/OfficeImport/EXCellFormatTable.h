//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface EXCellFormatTable : NSObject
{
}

+ (void)setDefaultWithState:(id)arg1;	// IMP=0x00800000003b1e92
+ (void)readFromCellStylesElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001bd17e
+ (void)readFromCellStyleXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001bd164
+ (void)readFromCellXfsElement:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00800000001bc43e
+ (void)readCellFormatsFrom:(struct _xmlNode *)arg1 isStyle:(_Bool)arg2 state:(id)arg3;	// IMP=0x00800000001bc576

@end
