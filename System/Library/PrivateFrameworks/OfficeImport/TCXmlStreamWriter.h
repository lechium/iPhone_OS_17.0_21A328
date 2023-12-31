//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, TCXmlTextWriterProvider;

__attribute__((visibility("hidden")))
@interface TCXmlStreamWriter : NSObject
{
    TCXmlTextWriterProvider *mTextWriterProvider;	// 8 = 0x8
    unsigned int mCurrentDepth;	// 16 = 0x10
    _Bool mContentAddedToTopElement;	// 20 = 0x14
    NSMutableSet *mAddedIds;	// 24 = 0x18
}

+ (_Bool)writeAnchorTargetToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;	// IMP=0x00600000002e8924
+ (_Bool)writeDtdToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 pubid:(id)arg3 sysid:(id)arg4 subset:(id)arg5;	// IMP=0x00600000002e87ca
+ (_Bool)writeNamespaceToStream:(struct _xmlTextWriter *)arg1 prefix:(id)arg2 uri:(const char *)arg3;	// IMP=0x00600000002e8707
+ (_Bool)writeAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;	// IMP=0x00600000002e85d3
+ (_Bool)writePlainAttributeToStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 content:(id)arg3;	// IMP=0x00600000002e84e1
+ (_Bool)writeStringToStream:(struct _xmlTextWriter *)arg1 text:(id)arg2;	// IMP=0x00600000002e844b
+ (_Bool)endElementInStream:(struct _xmlTextWriter *)arg1;	// IMP=0x00600000002e8438
+ (_Bool)startElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00600000002e8373
+ (_Bool)startPlainElementInStream:(struct _xmlTextWriter *)arg1 name:(id)arg2;	// IMP=0x00600000002e8305
+ (void)resetElementIds;	// IMP=0x00600000002e79d9
+ (id)newXmlStreamWriterWithZipEntryName:(id)arg1 outputStream:(id)arg2 isCompressed:(_Bool)arg3;	// IMP=0x00600000002e7903
- (void).cxx_destruct;	// IMP=0x00000000002e89df
- (_Bool)writeAnchorTarget:(id)arg1;	// IMP=0x00000000002e828d
- (_Bool)writeDtd:(id)arg1 pubid:(id)arg2 sysid:(id)arg3 subset:(id)arg4;	// IMP=0x00000000002e81aa
- (_Bool)writeNamespace:(id)arg1 uri:(const char *)arg2;	// IMP=0x00000000002e812d
- (_Bool)writeElementId:(id)arg1;	// IMP=0x00000000002e8098
- (_Bool)writePlainAttribute:(id)arg1 doubleContent:(double)arg2;	// IMP=0x00000000002e8081
- (_Bool)writePlainAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3;	// IMP=0x00000000002e805b
- (_Bool)writePlainAttribute:(id)arg1 boolContent:(_Bool)arg2;	// IMP=0x00000000002e8043
- (_Bool)writePlainAttribute:(id)arg1 intContent:(long long)arg2;	// IMP=0x00000000002e802b
- (_Bool)writePlainAttribute:(id)arg1 content:(id)arg2;	// IMP=0x00000000002e8013
- (_Bool)writeAttribute:(id)arg1 doubleContent:(double)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e7f53
- (_Bool)writeAttribute:(id)arg1 enumContent:(int)arg2 map:(id)arg3 prefix:(id)arg4 ns:(const char *)arg5;	// IMP=0x00000000002e7e92
- (_Bool)writeAttribute:(id)arg1 boolContent:(_Bool)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e7dd5
- (_Bool)writeAttribute:(id)arg1 intContent:(long long)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e7d18
- (_Bool)writeAttribute:(id)arg1 content:(id)arg2 prefix:(id)arg3 ns:(const char *)arg4;	// IMP=0x00000000002e7c32
- (_Bool)endElementsToDepth:(unsigned int)arg1;	// IMP=0x00000000002e7be6
- (unsigned int)currentDepth;	// IMP=0x00000000002e7bdd
- (_Bool)writeString:(id)arg1;	// IMP=0x00000000002e7b42
- (_Bool)endElement;	// IMP=0x00000000002e7ae7
- (_Bool)startPlainElement:(id)arg1;	// IMP=0x00000000002e7ad0
- (_Bool)startElement:(id)arg1 prefix:(id)arg2 ns:(const char *)arg3;	// IMP=0x00000000002e7a16
- (_Bool)contentAddedToTopElement;	// IMP=0x00000000002e7a0d
- (struct _xmlTextWriter *)textWriter;	// IMP=0x00000000002e79f7
- (id)textWriterProvider;	// IMP=0x00000000002e79e9
- (_Bool)tearDown;	// IMP=0x00000000002e7856
- (_Bool)setUp;	// IMP=0x00000000002e77ac
- (_Bool)isWriting;	// IMP=0x00000000002e7793
- (void)dealloc;	// IMP=0x00000000002e7720
- (id)initWithTextWriterProvider:(id)arg1;	// IMP=0x00000000002e767c

@end

