//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

__attribute__((visibility("hidden")))
@interface PMTop
{
}

+ (_Bool)supportsProgressiveMapping;	// IMP=0x0010000000470092
- (_Bool)isCancelled;	// IMP=0x000000000047008a
- (Class)stateClass;	// IMP=0x0000000000470079
- (Class)mapperClassForIndexing:(_Bool)arg1;	// IMP=0x0000000000470048
- (void)readFile:(id)arg1 orData:(id)arg2 dataFileName:(id)arg3 format:(unsigned long long)arg4 archiver:(id)arg5 forIndexing:(_Bool)arg6;	// IMP=0x000000000046ff59
- (Class)readerClassForXMLDocuments;	// IMP=0x000000000046ff48
- (Class)readerClassForBinaryDocuments;	// IMP=0x000000000046ff37
- (void)initializeClasses;	// IMP=0x000000000046feee

@end
