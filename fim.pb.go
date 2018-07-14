// Code generated by protoc-gen-go. DO NOT EDIT.
// source: fim.proto

package fim

import proto "github.com/golang/protobuf/proto"
import fmt "fmt"
import math "math"

import (
	context "golang.org/x/net/context"
	grpc "google.golang.org/grpc"
)

// Reference imports to suppress errors if they are not otherwise used.
var _ = proto.Marshal
var _ = fmt.Errorf
var _ = math.Inf

// This is a compile-time assertion to ensure that this generated file
// is compatible with the proto package it is being compiled against.
// A compilation error at this line likely means your copy of the
// proto package needs to be updated.
const _ = proto.ProtoPackageIsVersion2 // please upgrade the proto package

type FimdConfig struct {
	ContainerId          string               `protobuf:"bytes,1,opt,name=containerId,proto3" json:"containerId,omitempty"`
	Subjects             []*FimWatcherSubject `protobuf:"bytes,2,rep,name=subjects,proto3" json:"subjects,omitempty"`
	XXX_NoUnkeyedLiteral struct{}             `json:"-"`
	XXX_unrecognized     []byte               `json:"-"`
	XXX_sizecache        int32                `json:"-"`
}

func (m *FimdConfig) Reset()         { *m = FimdConfig{} }
func (m *FimdConfig) String() string { return proto.CompactTextString(m) }
func (*FimdConfig) ProtoMessage()    {}
func (*FimdConfig) Descriptor() ([]byte, []int) {
	return fileDescriptor_fim_e4563df1c140d554, []int{0}
}
func (m *FimdConfig) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FimdConfig.Unmarshal(m, b)
}
func (m *FimdConfig) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FimdConfig.Marshal(b, m, deterministic)
}
func (dst *FimdConfig) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FimdConfig.Merge(dst, src)
}
func (m *FimdConfig) XXX_Size() int {
	return xxx_messageInfo_FimdConfig.Size(m)
}
func (m *FimdConfig) XXX_DiscardUnknown() {
	xxx_messageInfo_FimdConfig.DiscardUnknown(m)
}

var xxx_messageInfo_FimdConfig proto.InternalMessageInfo

func (m *FimdConfig) GetContainerId() string {
	if m != nil {
		return m.ContainerId
	}
	return ""
}

func (m *FimdConfig) GetSubjects() []*FimWatcherSubject {
	if m != nil {
		return m.Subjects
	}
	return nil
}

type FimWatcherSubject struct {
	Paths                []string `protobuf:"bytes,1,rep,name=paths,proto3" json:"paths,omitempty"`
	Events               []string `protobuf:"bytes,2,rep,name=events,proto3" json:"events,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *FimWatcherSubject) Reset()         { *m = FimWatcherSubject{} }
func (m *FimWatcherSubject) String() string { return proto.CompactTextString(m) }
func (*FimWatcherSubject) ProtoMessage()    {}
func (*FimWatcherSubject) Descriptor() ([]byte, []int) {
	return fileDescriptor_fim_e4563df1c140d554, []int{1}
}
func (m *FimWatcherSubject) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FimWatcherSubject.Unmarshal(m, b)
}
func (m *FimWatcherSubject) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FimWatcherSubject.Marshal(b, m, deterministic)
}
func (dst *FimWatcherSubject) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FimWatcherSubject.Merge(dst, src)
}
func (m *FimWatcherSubject) XXX_Size() int {
	return xxx_messageInfo_FimWatcherSubject.Size(m)
}
func (m *FimWatcherSubject) XXX_DiscardUnknown() {
	xxx_messageInfo_FimWatcherSubject.DiscardUnknown(m)
}

var xxx_messageInfo_FimWatcherSubject proto.InternalMessageInfo

func (m *FimWatcherSubject) GetPaths() []string {
	if m != nil {
		return m.Paths
	}
	return nil
}

func (m *FimWatcherSubject) GetEvents() []string {
	if m != nil {
		return m.Events
	}
	return nil
}

type FimdHandle struct {
	Id                   int32    `protobuf:"varint,1,opt,name=id,proto3" json:"id,omitempty"`
	XXX_NoUnkeyedLiteral struct{} `json:"-"`
	XXX_unrecognized     []byte   `json:"-"`
	XXX_sizecache        int32    `json:"-"`
}

func (m *FimdHandle) Reset()         { *m = FimdHandle{} }
func (m *FimdHandle) String() string { return proto.CompactTextString(m) }
func (*FimdHandle) ProtoMessage()    {}
func (*FimdHandle) Descriptor() ([]byte, []int) {
	return fileDescriptor_fim_e4563df1c140d554, []int{2}
}
func (m *FimdHandle) XXX_Unmarshal(b []byte) error {
	return xxx_messageInfo_FimdHandle.Unmarshal(m, b)
}
func (m *FimdHandle) XXX_Marshal(b []byte, deterministic bool) ([]byte, error) {
	return xxx_messageInfo_FimdHandle.Marshal(b, m, deterministic)
}
func (dst *FimdHandle) XXX_Merge(src proto.Message) {
	xxx_messageInfo_FimdHandle.Merge(dst, src)
}
func (m *FimdHandle) XXX_Size() int {
	return xxx_messageInfo_FimdHandle.Size(m)
}
func (m *FimdHandle) XXX_DiscardUnknown() {
	xxx_messageInfo_FimdHandle.DiscardUnknown(m)
}

var xxx_messageInfo_FimdHandle proto.InternalMessageInfo

func (m *FimdHandle) GetId() int32 {
	if m != nil {
		return m.Id
	}
	return 0
}

func init() {
	proto.RegisterType((*FimdConfig)(nil), "fim.FimdConfig")
	proto.RegisterType((*FimWatcherSubject)(nil), "fim.FimWatcherSubject")
	proto.RegisterType((*FimdHandle)(nil), "fim.FimdHandle")
}

// Reference imports to suppress errors if they are not otherwise used.
var _ context.Context
var _ grpc.ClientConn

// This is a compile-time assertion to ensure that this generated file
// is compatible with the grpc package it is being compiled against.
const _ = grpc.SupportPackageIsVersion4

// FimdClient is the client API for Fimd service.
//
// For semantics around ctx use and closing/ending streaming RPCs, please refer to https://godoc.org/google.golang.org/grpc#ClientConn.NewStream.
type FimdClient interface {
	CreateWatch(ctx context.Context, in *FimdConfig, opts ...grpc.CallOption) (*FimdHandle, error)
	DestroyWatch(ctx context.Context, in *FimdConfig, opts ...grpc.CallOption) (*FimdHandle, error)
}

type fimdClient struct {
	cc *grpc.ClientConn
}

func NewFimdClient(cc *grpc.ClientConn) FimdClient {
	return &fimdClient{cc}
}

func (c *fimdClient) CreateWatch(ctx context.Context, in *FimdConfig, opts ...grpc.CallOption) (*FimdHandle, error) {
	out := new(FimdHandle)
	err := c.cc.Invoke(ctx, "/fim.Fimd/CreateWatch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

func (c *fimdClient) DestroyWatch(ctx context.Context, in *FimdConfig, opts ...grpc.CallOption) (*FimdHandle, error) {
	out := new(FimdHandle)
	err := c.cc.Invoke(ctx, "/fim.Fimd/DestroyWatch", in, out, opts...)
	if err != nil {
		return nil, err
	}
	return out, nil
}

// FimdServer is the server API for Fimd service.
type FimdServer interface {
	CreateWatch(context.Context, *FimdConfig) (*FimdHandle, error)
	DestroyWatch(context.Context, *FimdConfig) (*FimdHandle, error)
}

func RegisterFimdServer(s *grpc.Server, srv FimdServer) {
	s.RegisterService(&_Fimd_serviceDesc, srv)
}

func _Fimd_CreateWatch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(FimdConfig)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(FimdServer).CreateWatch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/fim.Fimd/CreateWatch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(FimdServer).CreateWatch(ctx, req.(*FimdConfig))
	}
	return interceptor(ctx, in, info, handler)
}

func _Fimd_DestroyWatch_Handler(srv interface{}, ctx context.Context, dec func(interface{}) error, interceptor grpc.UnaryServerInterceptor) (interface{}, error) {
	in := new(FimdConfig)
	if err := dec(in); err != nil {
		return nil, err
	}
	if interceptor == nil {
		return srv.(FimdServer).DestroyWatch(ctx, in)
	}
	info := &grpc.UnaryServerInfo{
		Server:     srv,
		FullMethod: "/fim.Fimd/DestroyWatch",
	}
	handler := func(ctx context.Context, req interface{}) (interface{}, error) {
		return srv.(FimdServer).DestroyWatch(ctx, req.(*FimdConfig))
	}
	return interceptor(ctx, in, info, handler)
}

var _Fimd_serviceDesc = grpc.ServiceDesc{
	ServiceName: "fim.Fimd",
	HandlerType: (*FimdServer)(nil),
	Methods: []grpc.MethodDesc{
		{
			MethodName: "CreateWatch",
			Handler:    _Fimd_CreateWatch_Handler,
		},
		{
			MethodName: "DestroyWatch",
			Handler:    _Fimd_DestroyWatch_Handler,
		},
	},
	Streams:  []grpc.StreamDesc{},
	Metadata: "fim.proto",
}

func init() { proto.RegisterFile("fim.proto", fileDescriptor_fim_e4563df1c140d554) }

var fileDescriptor_fim_e4563df1c140d554 = []byte{
	// 227 bytes of a gzipped FileDescriptorProto
	0x1f, 0x8b, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0xff, 0x8c, 0x90, 0x4f, 0x4b, 0xc4, 0x30,
	0x10, 0xc5, 0x6d, 0xeb, 0x2e, 0x76, 0x2a, 0x8a, 0x83, 0x2c, 0x45, 0x3c, 0x94, 0x9e, 0x7a, 0x5a,
	0x30, 0x7e, 0x02, 0x59, 0x59, 0xf4, 0x1a, 0x0f, 0x9e, 0xd3, 0x66, 0xea, 0x8e, 0x98, 0x64, 0x49,
	0xa2, 0xe0, 0xb7, 0x97, 0xdd, 0xd4, 0x3f, 0xe0, 0x65, 0x8f, 0xef, 0xbd, 0xe4, 0xcd, 0x6f, 0x06,
	0xca, 0x91, 0xcd, 0x72, 0xeb, 0x5d, 0x74, 0x58, 0x8c, 0x6c, 0xda, 0x1e, 0x60, 0xcd, 0x46, 0xaf,
	0x9c, 0x1d, 0xf9, 0x05, 0x1b, 0xa8, 0x06, 0x67, 0xa3, 0x62, 0x4b, 0xfe, 0x51, 0xd7, 0x59, 0x93,
	0x75, 0xa5, 0xfc, 0x6b, 0xa1, 0x80, 0x93, 0xf0, 0xde, 0xbf, 0xd2, 0x10, 0x43, 0x9d, 0x37, 0x45,
	0x57, 0x89, 0xc5, 0x72, 0x57, 0xb9, 0x66, 0xf3, 0xac, 0xe2, 0xb0, 0x21, 0xff, 0x94, 0x62, 0xf9,
	0xf3, 0xae, 0xbd, 0x83, 0x8b, 0x7f, 0x31, 0x5e, 0xc2, 0x6c, 0xab, 0xe2, 0x26, 0xd4, 0x59, 0x53,
	0x74, 0xa5, 0x4c, 0x02, 0x17, 0x30, 0xa7, 0x0f, 0xb2, 0x53, 0x79, 0x29, 0x27, 0xd5, 0x5e, 0x27,
	0xcc, 0x07, 0x65, 0xf5, 0x1b, 0xe1, 0x19, 0xe4, 0x9c, 0xe8, 0x66, 0x32, 0x67, 0x2d, 0x0c, 0x1c,
	0xef, 0x52, 0xbc, 0x81, 0x6a, 0xe5, 0x49, 0x45, 0xda, 0xcf, 0xc2, 0xf3, 0x6f, 0xb2, 0x69, 0xbd,
	0xab, 0x5f, 0x23, 0x15, 0xb5, 0x47, 0x28, 0xe0, 0xf4, 0x9e, 0x42, 0xf4, 0xee, 0xf3, 0xe0, 0x3f,
	0xfd, 0x7c, 0x7f, 0xbf, 0xdb, 0xaf, 0x00, 0x00, 0x00, 0xff, 0xff, 0x8f, 0x11, 0xb1, 0x11, 0x4c,
	0x01, 0x00, 0x00,
}
