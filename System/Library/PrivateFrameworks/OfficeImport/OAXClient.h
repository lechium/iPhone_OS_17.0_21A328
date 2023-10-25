//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface OAXClient : NSObject
{
}

+ (_Bool)sourceDrawableIsTopLevel:(struct _xmlNode *)arg1;	// IMP=0x00100000002ecb68
- (id)readGraphicData:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000002ecb60
- (id)readOle:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000002ecb58
- (void)postprocessHyperlink:(id)arg1 relationship:(id)arg2 state:(id)arg3;	// IMP=0x000000000021bba4
- (id)readClientTextField:(struct _xmlNode *)arg1 identity:(id)arg2 paragraph:(id)arg3 state:(id)arg4;	// IMP=0x00000000002ecb50
- (void)readBlipExtWithURI:(id)arg1 fromNode:(struct _xmlNode *)arg2 toDrawable:(id)arg3 state:(id)arg4;	// IMP=0x00000000002ecb4a
- (void)readClientDataFromGraphicalFramePropertiesNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x0000000000231faa
- (void)readClientDataFromGraphicDataNode:(struct _xmlNode *)arg1 toDiagram:(id)arg2 state:(id)arg3;	// IMP=0x00000000001e6174
- (void)readClientDataFromGroupNode:(struct _xmlNode *)arg1 toGroup:(id)arg2 state:(id)arg3;	// IMP=0x00000000001d3bbf
- (void)readClientDataFromPictureNode:(struct _xmlNode *)arg1 toImage:(id)arg2 state:(id)arg3;	// IMP=0x00000000001aaf78
- (void)readClientDataFromShapeNode:(struct _xmlNode *)arg1 toShape:(id)arg2 state:(id)arg3;	// IMP=0x000000000021b81e
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;	// IMP=0x00000000001d3bd1
- (struct _xmlNode *)genericNonVisualPropertiesNodeForDrawableNode:(struct _xmlNode *)arg1 inNamespace:(id)arg2 state:(id)arg3;	// IMP=0x00000000002ecb42
- (id)readClientDrawableFromXmlNode:(struct _xmlNode *)arg1 state:(id)arg2;	// IMP=0x00000000002ecb3a

@end
