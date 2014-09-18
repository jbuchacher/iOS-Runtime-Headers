/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class TSPDescriptionGenerator;

@interface TSPDescriptionComponentReader : TSPComponentReader {
    TSPDescriptionGenerator *_descriptionGenerator;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithComponent:(id)arg1 readChannel:(id)arg2 descriptionGenerator:(id)arg3;
- (id)newUnarchiverWithObjectIdentifier:(long long)arg1 messageInfo:(const struct MessageInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; struct RepeatedField<unsigned int> { unsigned int *x_3_1_1; int x_3_1_2; int x_3_1_3; } x3; int x4; unsigned int x5; unsigned int x6; struct RepeatedPtrField<TSP::FieldInfo> { void **x_7_1_1; int x_7_1_2; int x_7_1_3; int x_7_1_4; } x7; struct RepeatedField<unsigned long long> { unsigned long long *x_8_1_1; int x_8_1_2; int x_8_1_3; } x8; int x9; struct RepeatedField<unsigned long long> { unsigned long long *x_10_1_1; int x_10_1_2; int x_10_1_3; } x10; int x11; int x12; unsigned int x13[1]; }*)arg2 message:(struct auto_ptr<google::protobuf::Message> { struct Message {} *x1; }*)arg3 messageVersion:(unsigned long long)arg4 strongReferences:(struct auto_ptr<__gnu_cxx::hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > > { struct hash_map<const long long, bool, TSP::IdentifierHash, std::__1::equal_to<const long long>, std::__1::allocator<std::__1::pair<const long long, bool> > > {} *x1; })arg5 unknownMessages:(id)arg6 error:(id*)arg7;
- (void)read;
- (bool)shouldProceedParsingOnFailure;
- (id)unknownObjectUnarchiverArchiveInfo:(const struct ArchiveInfo { int (**x1)(); struct UnknownFieldSet { struct vector<google::protobuf::UnknownField, std::__1::allocator<google::protobuf::UnknownField> > {} *x_2_1_1; } x2; unsigned long long x3; struct RepeatedPtrField<TSP::MessageInfo> { void **x_4_1_1; int x_4_1_2; int x_4_1_3; int x_4_1_4; } x4; int x5; unsigned int x6[1]; }*)arg1 stream:(struct DispatchDataInputStream { }*)arg2;

@end