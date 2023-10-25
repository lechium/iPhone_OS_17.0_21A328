//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSURL.h>

@class NSString;

@interface NSURL (WFNaming)
+ (id)dc_queryStringWithQueryDictionary:(id)arg1 addingPercentEscapes:(_Bool)arg2;	// IMP=0x00100000000bb6dc
+ (id)dc_queryStringWithQueryDictionary:(id)arg1;	// IMP=0x00100000000bb6c5
+ (id)dc_dictionaryFromQueryString:(id)arg1;	// IMP=0x00100000000bb49b
+ (id)dc_queryItemsFromQueryDictionary:(id)arg1;	// IMP=0x00100000000bb19d
+ (id)dc_queryItemsFromQueryString:(id)arg1;	// IMP=0x00100000000bb13c
+ (id)wf_savedShortcutStatesURL;	// IMP=0x00100000000cc4c2
+ (id)wf_shortcutsDirectoryURL;	// IMP=0x00100000000cc466
+ (id)wf_realLibraryDirectoryURL;	// IMP=0x00100000000cc40a
+ (id)wf_realHomeDirectoryURL;	// IMP=0x00100000000cc3da
@property(readonly, copy, nonatomic) NSString *wfName;
- (_Bool)dc_matchesHost:(id)arg1;	// IMP=0x00100000000bb08a
- (id)dc_fragmentQueryDictionary;	// IMP=0x00100000000bafd0
- (id)dc_queryDictionary;	// IMP=0x00100000000baf6d
- (id)wf_localizedDisplayName;	// IMP=0x00100000000bea25
- (id)wf_displayPath;	// IMP=0x00100000000be9ce
- (id)wf_displayPathComponents;	// IMP=0x00100000000be6b0
- (_Bool)wf_fileIsShortcutsOwned;	// IMP=0x00100000000cc22e
- (_Bool)wf_fileIsOnSameVolumeAsURL:(id)arg1;	// IMP=0x00100000000cc0cd
- (_Bool)wf_proposedFileIsContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000cc00e
- (_Bool)wf_isContainedByDirectoryAtURL:(id)arg1;	// IMP=0x00100000000cbff5
- (id)wf_relativePathFromURL:(id)arg1;	// IMP=0x00100000000cbe4e
- (long long)wf_relationshipToDirectoryAtURL:(id)arg1;	// IMP=0x00100000000cbdaf
- (id)wf_fileSize;	// IMP=0x00100000000cbcdb
- (_Bool)wf_fileHasExtendedAttribute:(id)arg1;	// IMP=0x00100000000cbb94
- (_Bool)wf_sandboxAllowsWritingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000cbb7b
- (_Bool)wf_sandboxAllowsReadingFileWithAuditToken:(CDStruct_6ad76789)arg1;	// IMP=0x00100000000cbb62
- (_Bool)wf_sandboxAllowsWritingFile;	// IMP=0x00100000000cbb49
- (_Bool)wf_sandboxAllowsReadingFile;	// IMP=0x00100000000cbb30
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1 withAuditToken:(CDStruct_6ad76789)arg2;	// IMP=0x00100000000cbad0
- (_Bool)wf_sandboxAllowsOperation:(const char *)arg1;	// IMP=0x00100000000cba56
- (_Bool)wf_fileIsDirectory;	// IMP=0x00100000000cb9c5
- (_Bool)wf_fileIsWritable;	// IMP=0x00100000000cb94a
- (_Bool)wf_fileIsReadable;	// IMP=0x00100000000cb8cf
- (_Bool)wf_fileExists;	// IMP=0x00100000000cb854
@end
